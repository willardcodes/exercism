class CalculatorConundrum {

    public String calculate(int operand1, int operand2, String operation) {
        if (operation == null)
            throw new IllegalArgumentException("Operation cannot be null");

        if (operation.isEmpty())
            throw new IllegalArgumentException("Operation cannot be empty");

        int result = switch (operation) {
            case "+" -> add(operand1, operand2);
            case "*" -> multiply(operand1, operand2);
            case "/" -> divide(operand1, operand2);
            default -> throw new IllegalOperationException(String.format("Operation '%s' does not exist", operation));
        };

        return String.format("%d %s %d = %d", operand1, operation, operand2, result);
    }

    private int add(int operand1, int operand2) {
        return operand1 + operand2;
    }

    private int multiply(int operand1, int operand2) {
        return operand1 * operand2;
    }

    private int divide(int operand1, int operand2) {
        try {
            return operand1 / operand2;
        } catch (ArithmeticException ae) {
            throw new IllegalOperationException("Division by zero is not allowed", ae);
        }
    }

}
