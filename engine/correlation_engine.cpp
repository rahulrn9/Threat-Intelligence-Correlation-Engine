#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <vector>
#include <string>

using json = nlohmann::json;

int main() {
    std::ifstream file("feeds/misp_feed.json");
    json feed;
    file >> feed;

    std::cout << "[+] Correlating IOCs with MITRE ATT&CK..." << std::endl;

    for (const auto& entry : feed["indicators"]) {
        std::string tactic = entry["mitre_tactic"];
        std::string value = entry["indicator_value"];
        std::cout << "Tactic: " << tactic << " | IOC: " << value << std::endl;
    }

    std::cout << "[+] Correlation complete." << std::endl;
    return 0;
}