//----- (000000014011E140) ----------------------------------------------------
__int64 __fastcall sub_14011E140(__int64 a1)
{
	int v2; // ebx
	char KeyState; // al
	_DWORD* v4; // rdx
	int v5; // r8d
	bool v6; // zf
	__int64 result; // rax

	v2 = 0;
	KeyState = GetKeyState(20);
	v4 = *(_DWORD**)(a1 + 16);
	v5 = 0;
	v6 = (KeyState & 1) == 0;
	result = 1i64;
	if (!v6)
		v5 = 1;
	v4[2] = 1;
	LOBYTE(v2) = v5 != 0;
	*v4 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

