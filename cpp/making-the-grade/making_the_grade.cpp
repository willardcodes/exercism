#include <array>
#include <string>
#include <vector>

std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> rounded_scores;
    for (const double student_score : student_scores) {
        int rounded_score = static_cast<int>(student_score);
        rounded_scores.emplace_back(rounded_score);
    }
    return rounded_scores;
}

int count_failed_students(std::vector<int> student_scores) {
    int failing_scores{0};
    for (const double student_score : student_scores) {
        if (student_score <= 40)
            failing_scores++;
    }
    return failing_scores;
}

std::array<int, 4> letter_grades(int highest_score) {
    std::array<int, 4> thresholds{};
    int interval = (highest_score - 40) / 4;
    int starting_grade = 41;
    for (int i = 0; i < thresholds.size(); i++) {
        thresholds[i] = starting_grade + (interval * i);
    }
    return thresholds;
}

std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> matched_scores;
    for (int i = 0; i < student_scores.size(); i++) {
        std::string score_string = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        matched_scores.push_back(score_string);
    }
    return matched_scores;
}

std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) return student_names[i];
    }
    return "";
}
