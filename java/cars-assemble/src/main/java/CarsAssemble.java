public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        double result = speed * 221;

        if (speed > 4 && speed <= 8) result *= 0.9;
        else if (speed == 9) result *= 0.8;
        else if (speed == 10) result *= 0.77;

        return result;
    }

    public int workingItemsPerMinute(int speed) {
        return (int) (productionRatePerHour(speed) / 60);
    }

}
