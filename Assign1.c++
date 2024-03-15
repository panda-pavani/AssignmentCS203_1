#include <iostream>
#include <vector>
#include <random>

// random chord length strategy(function generation)
std::vector<double> randomChordLength(int nSamples) {
    std::vector<double> lengths;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1.0);

    for (int i = 0; i < nSamples; ++i) {
        lengths.push_back(dis(gen));
    }

    return lengths;
}

// random chord endpoint strategy(function generation)
std::vector<double> randomChordEndpoint(int nSamples) {
    std::vector<double> endpoints;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 2 * M_PI);

    for (int i = 0; i < nSamples; ++i) {
        endpoints.push_back(cos(dis(gen)));
    }

    return endpoints;
}

// random radius strategy(function generation)
std::vector<double> randomRadius(int nSamples) {
    std::vector<double> radii;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1.0);

    for (int i = 0; i < nSamples; ++i) {
        radii.push_back(1 - dis(gen) * 2); 
    }

    return radii;
}





// estimating the probability of the chord to be greater than the half
double estimateProbability(const std::vector<double>& samples) {
    int count = 0;

    for (double sample : samples) {
        if (sample > 0.5) {
            count++;
        }
    }

    return static_cast<double>(count) / samples.size();
}

int main() {
    int nSamples = 10000000;

    std::vector<double> chordLengths = randomChordLength(nSamples);
    double probabilityChordLength = estimateProbability(chordLengths);
    std::cout << "Probability (random chord length strategy): " << probabilityChordLength << std::endl;

    std::vector<double> chordEndpoints = randomChordEndpoint(nSamples);
    double probabilityChordEndpoint = estimateProbability(chordEndpoints);
    std::cout << "Probability (random chord endpoint strategy): " << probabilityChordEndpoint << std::endl;

    std::vector<double> radii = randomRadius(nSamples);
    double probabilityRadius = estimateProbability(radii);
    std::cout << "Probability (random radius strategy): " << probabilityRadius << std::endl;

    return 0;
}