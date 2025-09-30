public class LogLine {

    private final String logLine;

    public LogLine(String logLine) {
        this.logLine = logLine;
    }

    public LogLevel getLogLevel() {
        int startIndex = this.logLine.indexOf('[') + 1;
        int endIndex = this.logLine.indexOf(']');
        String level = this.logLine.substring(startIndex, endIndex);

        return switch (level) {
            case "TRC" -> LogLevel.TRACE;
            case "DBG" -> LogLevel.DEBUG;
            case "INF" -> LogLevel.INFO;
            case "WRN" -> LogLevel.WARNING;
            case "ERR" -> LogLevel.ERROR;
            case "FTL" -> LogLevel.FATAL;
            default -> LogLevel.UNKNOWN;
        };
    }

    public String getOutputForShortLog() {
        int startIndex = this.logLine.indexOf(':') + 1;
        String message = this.logLine.substring(startIndex).trim();
        return String.format("%s:%s", getLogLevel().getNumericalLevel(), message);
    }

}
