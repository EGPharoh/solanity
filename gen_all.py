def generate_case_combinations(s):
    if not s:
        return ['']
    rest = generate_case_combinations(s[1:])
    return [s[0].lower() + string for string in rest] + [s[0].upper() + string for string in rest]

input_string = input("Enter a string: ")
combinations = generate_case_combinations(input_string)
formatted_output = ',\n'.join(['"' + combo + '"' for combo in combinations])
print(formatted_output)
