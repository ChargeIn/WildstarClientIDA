//----- (0000000140058350) ----------------------------------------------------
__int64 __fastcall sub_140058350(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	__int64 v3; // r11
	unsigned __int64 v4; // rdx
	_QWORD* i; // r10
	__int64 v6; // rcx
	__int64 result; // rax

	v2 = sub_1400580E0(a1, a2);
	v4 = *(_QWORD*)(v3 + 16);
	for (i = v2; v4 > (unsigned __int64)v2; v4 -= 16i64)
	{
		*(_QWORD*)v4 = *(_QWORD*)(v4 - 16);
		*(_DWORD*)(v4 + 8) = *(_DWORD*)(v4 - 8);
	}
	v6 = *(_QWORD*)(v3 + 16);
	*v2 = *(_QWORD*)v6;
	result = *(unsigned int*)(v6 + 8);
	*((_DWORD*)i + 2) = result;
	return result;
}
// 14005835C: variable 'v3' is possibly undefined

