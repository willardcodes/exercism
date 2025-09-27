public class ExperimentalRemoteControlCar implements RemoteControlCar {

    private int distance;

    @Override
    public void drive() {
        this.distance += 20;
    }

    @Override
    public int getDistanceTravelled() {
        return this.distance;
    }

}
