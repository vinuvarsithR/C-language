def symptoms_checker(symptoms):
    # Basic rule-based diagnosis
    diagnoses = {
        "fever cough fatigue": "Flu",
        "fever headache nausea": "Dengue",
        "cough sore throat runny nose": "Common Cold",
        "fever rash joint pain": "Chikungunya",
        "none": "No illness detected. Stay healthy!"
    }
    
    # Matching input symptoms
    for key, diagnosis in diagnoses.items():
        if all(symptom in key for symptom in symptoms):
            return f"Diagnosis: {diagnosis}"

    return "Unable to determine the diagnosis. Please consult a doctor."

def main():
    print("Welcome to the Basic Symptoms Checker!")
    print("Enter your symptoms separated by commas (e.g., fever, cough, fatigue):")
    user_input = input().lower()
    symptoms = [symptom.strip() for symptom in user_input.split(",")]

    # Run the checker
    result = symptoms_checker(symptoms)
    print("\n" + result)

# Run the simulation
if __name__ == "__main__":
    main()
