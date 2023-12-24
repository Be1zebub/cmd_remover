#include <GarrysMod/Lua/Interface.h>
#include <GarrysMod/Interfaces.hpp>
#include <GarrysMod/InterfacePointers.hpp>

#include <icvar.h>

GMOD_MODULE_OPEN() {
	ICvar *icvar = InterfacePointers::Cvar();

	ConCommandBase *status = icvar->FindCommandBase("status");
	if (status) icvar->UnregisterConCommand(status);

	ConCommandBase *ping = icvar->FindCommandBase("ping");
	if (ping) icvar->UnregisterConCommand(ping);

	return 0;
}
