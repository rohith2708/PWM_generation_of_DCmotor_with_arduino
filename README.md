# PWM_generation_of_DCmotor_with_arduino
The LM7085 can be replaced with LM1085, After summarizing the data-sheets of LM7805
and LM1085, both are voltage regulators which poses similar voltage regulating characteristics
from Texas Instrument family and provides voltage output range from 5 to 24V, with
dropout output current range from 1A to 3A. Both provides a protection of current limiting
against short circuit and thermal protection.While making the layout design with LM1085
we must provide two resistors to set the output voltage. Since the LM1085-5 and LM7805
is a monolithic three terminal positive voltage regulators there shouldn’t be any restrictions
in replacing one another but we must be careful in connecting the pins to the circuit since
there is a difference in functionality of each pins between the two regulators, below attached
pin mapping image of LM7805 and LM1085 respectively.
