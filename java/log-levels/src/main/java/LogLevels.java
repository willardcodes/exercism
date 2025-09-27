public class LogLevels {
    
    public static String message(String logLine) {
        return logLine.substring(logLine.indexOf(':') + 1).strip();
    }

    public static String logLevel(String logLine) {
        return logLine.substring(logLine.indexOf('[') + 1, logLine.indexOf(']')).toLowerCase();
    }

    public static String reformat(String logLine) {
        return String.format("%s (%s)", LogLevels.message(logLine), LogLevels.logLevel(logLine));
    }

}
