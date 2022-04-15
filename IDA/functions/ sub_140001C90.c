//----- (0000000140001C90) ----------------------------------------------------
__int64 __fastcall sub_140001C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rdx
	__int64(__fastcall * *v6)(); // [rsp+20h] [rbp-48h] BYREF
	int v7; // [rsp+28h] [rbp-40h]
	int v8; // [rsp+30h] [rbp-38h]
	char v9; // [rsp+34h] [rbp-34h]
	int v10; // [rsp+38h] [rbp-30h]
	int v11; // [rsp+3Ch] [rbp-2Ch]

	v4 = *(_QWORD*)(a1 + 944);
	if (!v4)
		return ((__int64 (*)(void))sub_1400F9B70)();
	v7 = *(_DWORD*)(v4 + 8);
	v6 = off_140B54E00;
	v8 = *(_DWORD*)(v4 + 16);
	v9 = *(_BYTE*)(v4 + 20);
	v10 = *(_DWORD*)(v4 + 24);
	v11 = *(_DWORD*)(v4 + 28);
	return sub_1400F9B70(&v6, v4, a3, a4);
}
// 1400F9B70: using guessed type __int64 __fastcall sub_1400F9B70(_QWORD, _QWORD, _QWORD, _QWORD);
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();

