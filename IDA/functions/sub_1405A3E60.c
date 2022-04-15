//----- (00000001405A3E60) ----------------------------------------------------
__int64 __fastcall sub_1405A3E60(__int64 a1, __int64 a2, int a3, int a4)
{
	int v4; // xmm0_4
	__int64 result; // rax

	*(_DWORD*)a1 = sub_1405E6300(a2, 9, a3, a4, 0);
	*(float*)(a1 + 4) = (float)(int)sub_1405E6300(a2, 8, a3, a4, 0) * 0.0099999998;
	sub_1405E6480();
	*(_DWORD*)(a1 + 8) = v4;
	*(float*)(a1 + 12) = (float)(int)sub_1405E6300(a2, 1, a3, a4, 0) * 0.0099999998;
	*(_DWORD*)(a1 + 16) = sub_1405E6300(a2, 21, a3, a4, 0);
	*(_DWORD*)(a1 + 20) = sub_1405E6300(a2, 3, a3, a4, 0);
	result = (unsigned int)sub_1405E6300(a2, 2, a3, a4, 0);
	*(float*)(a1 + 24) = (float)(int)result * 0.0099999998;
	return result;
}
// 1405A3ED8: variable 'v4' is possibly undefined

