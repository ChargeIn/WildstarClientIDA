//----- (00000001406F9BA0) ----------------------------------------------------
__int64 __fastcall sub_1406F9BA0(__int64 a1)
{
	int v1; // ebx
	__int64 v3; // rdx
	unsigned int v4; // edi
	unsigned int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // cf
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3)
		v4 = *(_DWORD*)(v3 + 56);
	else
		v4 = 0;
	v5 = sub_1406F4660();
	v6 = *(_DWORD**)(a1 + 16);
	v7 = v4 < v5;
	v6[2] = 1;
	result = 1i64;
	LOBYTE(v1) = !v7;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

