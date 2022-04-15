//----- (00000001404261E0) ----------------------------------------------------
__int64 __fastcall sub_1404261E0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	int v6; // [rsp+20h] [rbp-18h]
	BOOL v7; // [rsp+28h] [rbp-10h]

	result = sub_1405A8A40(a1, a2);
	if (result)
	{
		v7 = *(_DWORD*)(*(_QWORD*)(result + 8) + 300i64) < 4u;
		v6 = a3;
		return sub_1400EA3E0(a1, "QuestStateChanged", byte_1409E93FC, result, v6, v7);
	}
	return result;
}
// 1409E93FC: using guessed type _BYTE byte_1409E93FC[96];

