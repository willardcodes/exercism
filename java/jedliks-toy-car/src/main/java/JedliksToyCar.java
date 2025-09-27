public class JedliksToyCar {

    private int distance;
    private int battery = 100;

    public static JedliksToyCar buy() {
        return new JedliksToyCar();
    }

    public String distanceDisplay() {
        return String.format("Driven %d meters", this.distance);
    }

    public String batteryDisplay() {
        if (battery > 0)
            return String.format("Battery at %d%%", this.battery);
        else
            return "Battery empty";
    }

    public void drive() {
        if (battery > 0) {
            this.distance += 20;
            this.battery -= 1;
        }
    }

}
