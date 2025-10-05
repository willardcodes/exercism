namespace targets {

class Alien {
public:
    int x_coordinate;
    int y_coordinate;
    Alien(int x, int y) {
        this->x_coordinate = x;
        this->y_coordinate = y;
    }
    int get_health() {
        return this->health;
    }
    bool hit() {
        if (this->health > 0)
            this->health -= 1;
        return true;
    }
    bool is_alive() {
        return this->health > 0;
    }
    bool teleport(int x_new, int y_new) {
        this->x_coordinate = x_new;
        this->y_coordinate = y_new;
        return true;
    }
    bool collision_detection(Alien other_alien) {
        return other_alien.x_coordinate == this->x_coordinate && other_alien.y_coordinate == this->y_coordinate;
    }
private:
    int health{3};
};

}  // namespace targets
