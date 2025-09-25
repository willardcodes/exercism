import java.util.Map;

class SqueakyClean {
    private static final Map<Character, Character> replacements = Map.ofEntries(
            Map.entry('4', 'a'),
            Map.entry('3', 'e'),
            Map.entry('0', 'o'),
            Map.entry('1', 'l'),
            Map.entry('7', 't')
    );

    static String clean(String identifier) {
        StringBuilder builder = new StringBuilder();
        char[] chars = identifier.toCharArray();

        for (int i = 0; i < chars.length; i++) {
            if (Character.isLetter(chars[i]))
                builder.append(chars[i]);
            else if (Character.isWhitespace(chars[i]))
                builder.append('_');
            else if (chars[i] == '-')
                builder.append(Character.toUpperCase(chars[++i]));
            else if (replacements.containsKey(chars[i]))
                builder.append(replacements.get(chars[i]));
        }

        return builder.toString();
    }
}
