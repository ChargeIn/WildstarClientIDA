//----- (0000000140426240) ----------------------------------------------------
__int64 __fastcall sub_140426240(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	int v6; // [rsp+20h] [rbp-18h]
	BOOL v7; // [rsp+28h] [rbp-10h]

	result = sub_1405A8A40(a1, a2);
	if (result)
	{
		v7 = *(_DWORD*)(*(_QWORD*)(result + 8) + 300i64) < 4u;
		v6 = a3;
		return sub_1400EA3E0(a1, "QuestObjectiveUpdated", byte_1409E9324, result, v6, v7);
	}
	return result;
}
// 1409E9324: using guessed type _BYTE byte_1409E9324[64];

