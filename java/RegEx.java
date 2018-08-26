import java.util.regex.Matcher;
import java.util.regex.Pattern;

class RegEx {
    static void _macther() {
        System.out.println(Pattern.matches("ge+K", "gK"));
        System.out.println(Pattern.matches("ge*K", "gK"));
    }

    static void _compile() {
        // Pattern p = Pattern.compile("geek");
        Pattern p = Pattern.compile("G", Pattern.CASE_INSENSITIVE);
        Matcher m = p.matcher("geeksforgeeks");
        while (m.find()) {
            System.out.println("found at " + m.start() + " to " + (m.end() - 1));

        }
    }

    public static void main(String[] args) {
        // _macther();
        _compile();
    }
}