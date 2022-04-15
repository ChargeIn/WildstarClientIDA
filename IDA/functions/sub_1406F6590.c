//----- (00000001406F6590) ----------------------------------------------------
__int64 __fastcall sub_1406F6590(__int64 a1)
{
	unsigned __int16* v2; // rdx
	unsigned __int64* v3; // rdx
	unsigned __int64 v4; // r8
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = (unsigned __int16*)&unk_1409F7EBC;
	if (*(_QWORD*)(qword_140C65898 + 136))
		v2 = *(unsigned __int16**)(qword_140C65898 + 136);
	v3 = (unsigned __int64*)sub_14018F0E0(&v6, v2)[1];
	if (v3)
	{
		v4 = -1i64;
		do
			++v4;
		while (*((_BYTE*)v3 + v4));
		sub_140058710(a1, v3, v4);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v7)
		sub_14018B900(v7, 0);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

