function setMachineStateDashboard(machineNameID, state) { // hyperthetically would of been the actuale varables from the c++ app
    const machineStatusEl = document.getElementById(`machineState-${machineNameID}`) // in the page.css have mutiple color borders using this tile with the nameID, GREAT! because i dont have to make 3 functions!

    // clear the classes before
     machineStatusEl.className = " ";

     //switch case for list of states there could be // which will be added in the page . css options!
     switch( state ){
    case 'PRODUCING': 
        machineStatusEl.classList.add('state-producing'); // start the corrosponding class ( in this case "state-producing" )
        machineStatusEl.textContent ="PRODUCING";
        break;
    case 'IDLE': 
        machineStatusEl.classList.add('state-idle');
        machineStatusEl.textContent ="IDLE";
        break;
    case 'STARVED': 
        machineStatusEl.classList.add('state-starved');
        machineStatusEl.textContent ="STARVED";
        break;
    default:
        machineStatusEl.classList.add('state-unknown');
        machineStatusEl.textContent ="????";
        break;
        
     }

}

// declare what the currnt machine state is
const machineAstate = 'STARVED'; // replace to the state, again if this were linked to my c++ app just add ( m1.setState("IDLE");)
const machineBstate = 'PRODUCING'; // B
const machineCstate = 'IDLE'; // C

setMachineStateDashboard("A", machineAstate); // mahcine A has and id of 1 // duplicate for each state // nameID is only used to naviagte through machines
setMachineStateDashboard("B", machineBstate); // mahcine A has and id of 1 
setMachineStateDashboard("C", machineCstate); // mahcine A has and id of 1 

