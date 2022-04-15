//----- (0000000140426120) ----------------------------------------------------
__int64 __fastcall sub_140426120(__int64 a1, unsigned int a2, int a3)
{
	__int64 result; // rax

	if (!a3)
		sub_1400EA3E0(a1, "Dialog_ShowState", byte_1409E907C, a2);
	result = sub_1405A8A40(a1, a3);
	if (result)
		return sub_1400EA3E0(a1, "Dialog_ShowState", byte_1409E906C, a2, result);
	return result;
}
// 140426154: variable 'a1' is possibly undefined
// 1409E906C: using guessed type _BYTE byte_1409E906C[16];
// 1409E907C: using guessed type _BYTE byte_1409E907C[40];

