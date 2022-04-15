//----- (0000000140114FC0) ----------------------------------------------------
__int64 __fastcall sub_140114FC0(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int16* v3; // rax
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]

	v2 = sub_140114A30(a1);
	v3 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 112i64))(v2);
	v4 = (unsigned __int64*)sub_14018F0E0(&v7, v3)[1];
	if (v4)
	{
		v5 = -1i64;
		do
			++v5;
		while (*((_BYTE*)v4 + v5));
		sub_140058710((__int64)a1, v4, v5);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v8)
		sub_14018B900(v8, 0);
	return 1i64;
}

