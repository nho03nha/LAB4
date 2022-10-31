#define MAX_SIM 150

void set_random(Vtop *dut, vluint64_t sim_unit) {
    dut->rst_ni   = 1;
    dut->io_sw_i = rand()%9;
}
