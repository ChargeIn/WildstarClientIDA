//----- (0000000140859840) ----------------------------------------------------
__int64 __fastcall sub_140859840(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	__int64 v5; // [rsp+38h] [rbp+10h] BYREF

	v5 = a2;
	if (!(_DWORD)a2)
		return 14i64;
	v4 = sub_140830EE0(qword_140C61BA8, (__int64)&v5);
	if (v4)
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, v4);
	else
		return 15i64;
}

