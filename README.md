# 🔧 NIELIT Bootcamp — Verilog Design Projects

A collection of digital design modules implemented in **Verilog HDL** as part of the NIELIT VLSI/Digital Design Bootcamp. The projects cover foundational combinational and sequential circuits, progressing up to a mini System-on-Chip (SoC) integration and a UART receiver.

---

## 📁 Repository Structure

```
NIELIT_Bootcamp/
├── halfadder/          # Half Adder (combinational)
├── mux/                # 4×1 Multiplexer (combinational)
├── andgate_yosys/      # AND Gate + Yosys synthesis output
├── flipflop/           # JK Flip-Flop (sequential)
├── counter_4bit/       # 4-Bit Synchronous Up Counter
├── timer/              # Parameterized Countdown Timer (with end value)
├── IP_Design/          # Standalone Timer IP (configurable width)
├── Multiple_IP/        # Mini SoC — Counter + ALU + MUX integration
└── UART_RX/            # UART Receiver (FSM-based)
```

---

## 📦 Module Descriptions

### 1. Half Adder — `halfadder/`
**File:** `ha.v`

A 1-bit combinational half adder computing **sum** and **carry**.

| Port | Direction | Description |
|------|-----------|-------------|
| `a`, `b` | Input | Single-bit operands |
| `sum` | Output | `a XOR b` |
| `carry` | Output | `a AND b` |

---

### 2. 4×1 Multiplexer — `mux/`
**Files:** `mux_4x1.v`, `mux_4x1_tb.v`

A 4-to-1 dataflow multiplexer with 2 select lines.

| Port | Direction | Description |
|------|-----------|-------------|
| `i0–i3` | Input | Data inputs |
| `s0`, `s1` | Input | Select lines |
| `y` | Output | Selected output |

Truth table: `s1s0 = 00→i0`, `01→i1`, `10→i2`, `11→i3`

---

### 3. AND Gate with Yosys Synthesis — `andgate_yosys/`
**Files:** `and.v` (RTL), `and_gate.v` (Yosys-synthesized netlist), `andusingyosys.png`

A basic 2-input AND gate synthesized using **Yosys** open-source synthesis tool using standard-cell library mapping (`AND2X1`).

> 📸 Synthesis output schematic: `andusingyosys.png`

---

### 4. JK Flip-Flop — `flipflop/`
**Files:** `jk.v`, `jk_tb.v`

A clocked JK flip-flop with asynchronous reset.

| J | K | Operation |
|---|---|-----------|
| 0 | 0 | Hold |
| 0 | 1 | Reset (`Q=0`) |
| 1 | 0 | Set (`Q=1`) |
| 1 | 1 | Toggle |

Triggers on **positive clock edge**; `rst` asynchronously clears output.

---

### 5. 4-Bit Synchronous Up Counter — `counter_4bit/`
**Files:** `counter_4bit.v`, `counter_4bit_tb.v`, `counter_4bit.json`

A 4-bit binary up counter with synchronous reset. Counts from `0x0` to `0xF` and wraps around. The `counter_4bit.json` file contains the synthesized netlist.

| Port | Direction | Description |
|------|-----------|-------------|
| `clk` | Input | Clock signal |
| `rst` | Input | Synchronous reset (active high) |
| `q[3:0]` | Output | 4-bit count value |

---

### 6. Parameterized Countdown Timer — `timer/`
**Files:** `timer.v`, `timer_tb.v`

An N-bit countdown timer with a configurable **end value** (stops when count reaches `end_val`).

| Parameter | Default | Description |
|-----------|---------|-------------|
| `N` | 10 | Counter bit-width |

| Port | Direction | Description |
|------|-----------|-------------|
| `clk`, `rst` | Input | Clock and async reset |
| `start` | Input | Load and start the timer |
| `load_Val[N-1:0]` | Input | Initial count value |
| `end_val[N-1:0]` | Input | Target stop value |
| `done` | Output | Pulses high when count reaches `end_val` |

---

### 7. Timer IP (Fixed Countdown) — `IP_Design/`
**Files:** `timer.v`, `timer_tb.v`

A parameterized 8-bit countdown IP that counts down to **zero** and asserts `done`.

| Parameter | Default | Description |
|-----------|---------|-------------|
| `WIDTH` | 8 | Counter bit-width |

Suitable for use as a standalone IP core in larger designs.

---

### 8. Mini SoC (Multiple IP Integration) — `Multiple_IP/`
**Files:** `mini_soc.v`, `counter.v`, `alu.v`, `mux.v`, `mini_soc_tb.v`

A simple **System-on-Chip** demonstrating integration of multiple IPs:

- **Counter** (`counter.v`) — 4-bit free-running up counter
- **ALU** (`alu.v`) — 2-bit ALU supporting addition (`sel=0`) and subtraction (`sel=1`)
- **2×1 Mux** (`mux.v`) — Selects between counter output and ALU result

```
         ┌──────────┐
  clk ──►│ Counter  │──count[3:0]──┬──► ALU ──┐
  rst ──►│          │              │            ▼
         └──────────┘              └──► MUX ──► soc_out[1:0]
                                    ▲
                              alu_sel, mux_sel
```

| Port | Direction | Description |
|------|-----------|-------------|
| `clk`, `rst` | Input | Clock and reset |
| `alu_sel` | Input | ALU operation select |
| `mux_sel` | Input | Output mux select |
| `soc_out[1:0]` | Output | Final SoC output |

---

### 9. UART Receiver — `UART_RX/`
**Files:** `UART_RX.v`, `UART_tb.v`

A **UART RX module** implemented as a 5-state FSM operating at a configurable baud rate.

| Parameter | Default | Description |
|-----------|---------|-------------|
| `CLKS_PER_BIT` | 217 | Clock cycles per UART bit |

**States:** `IDLE → START → DATA → STOP → CLEANUP`

| Port | Direction | Description |
|------|-----------|-------------|
| `clk` | Input | System clock |
| `rx` | Input | Serial UART input line |
| `rx_valid` | Output | Pulses high when byte received |
| `rx_data[7:0]` | Output | 8-bit received byte (LSB first) |

> The default `CLKS_PER_BIT = 217` corresponds to a **115200 baud** rate with a ~25 MHz system clock.

---

## 🛠️ Tools Used

| Tool | Purpose |
|------|---------|
| **Icarus Verilog (`iverilog`)** | Simulation and compilation |
| **GTKWave** | Waveform viewing (`.vcd` files) |
| **Verilator** | RTL linting / fast simulation (`obj_dir/`) |
| **Yosys** | Logic synthesis (AND gate netlist) |

---

## ▶️ Running Simulations

### With Icarus Verilog
```bash
# Example: Simulate the UART RX
cd UART_RX
iverilog -o uart_sim UART_RX.v UART_tb.v
vvp uart_sim
gtkwave uart_tb.vcd

# Example: Simulate the Half Adder
cd halfadder
iverilog -o ha_sim ha.v ha_tb.v
vvp ha_sim
```

### With Yosys (AND Gate Synthesis)
```bash
cd andgate_yosys
yosys -p "read_verilog and.v; synth; write_verilog and_gate.v"
```

---

## 📚 Concepts Covered

- ✅ Combinational Logic (AND gate, Half Adder, MUX)
- ✅ Sequential Logic (JK Flip-Flop, Counters)
- ✅ Parameterized Modules
- ✅ Finite State Machines (UART RX)
- ✅ IP Integration / SoC Design
- ✅ RTL Synthesis with Yosys
- ✅ Simulation with Icarus Verilog & Verilator
- ✅ Waveform Analysis with GTKWave

---

## 🎓 About

These designs were developed as part of the **NIELIT VLSI/Digital Design Bootcamp**, covering RTL design fundamentals through Verilog HDL.
