#pragma once

/*
	@brief initializes Socket, its modules, and classes
*/
int socketInit(lua_State * L);

void socketClose();

void initLuaSocket(lua_State * L);