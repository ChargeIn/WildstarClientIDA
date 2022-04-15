//----- (00000001406D6EA0) ----------------------------------------------------
__int64 __fastcall sub_1406D6EA0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // ebx
	__int64 v4; // rdx
	int v5; // ecx
	char v6; // al
	_DWORD* v7; // rdx
	bool v8; // zf
	__int64 result; // rax

	v2 = sub_1400D6530(a1, 1);
	v3 = 0;
	v4 = v2;
	if (!v2 || (*(_DWORD*)(v2 + 432) & 0x20000000) == 0)
		v4 = 0i64;
	v5 = 1;
	if (v4)
		v5 = *(_DWORD*)(v4 + 1100);
	v6 = sub_1406D2C10(v5);
	v7 = *(_DWORD**)(a1 + 16);
	v8 = v6 == 0;
	v7[2] = 1;
	result = 1i64;
	LOBYTE(v3) = !v8;
	*v7 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

