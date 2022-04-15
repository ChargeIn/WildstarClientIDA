//----- (0000000140868480) ----------------------------------------------------
__int64 __fastcall sub_140868480(__int64 a1)
{
	int v1; // eax
	int i; // r8d
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 8);
	for (i = 0; v1; v1 &= v1 - 1)
		++i;
	result = sub_140833130(4 * i * (unsigned int)*(unsigned __int16*)(a1 + 16), *(_QWORD*)a1);
	*(_QWORD*)a1 = 0i64;
	*(_WORD*)(a1 + 16) = 0;
	return result;
}

