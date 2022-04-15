//----- (00000001401ABB20) ----------------------------------------------------
__int64 __fastcall sub_1401ABB20(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax

	if (!a1)
		return 4294967294i64;
	v2 = *(_QWORD*)(a1 + 40);
	if (!v2)
		return 4294967294i64;
	if (*(_QWORD*)(v2 + 56) && *(_DWORD*)(v2 + 40) != 15)
	{
		(*(void(__fastcall**)(_QWORD))(a1 + 56))(*(_QWORD*)(a1 + 64));
		*(_QWORD*)(v2 + 56) = 0i64;
	}
	*(_DWORD*)(v2 + 8) = 1;
	*(_DWORD*)(v2 + 40) = 15;
	v3 = *(_QWORD*)(a1 + 40);
	if (!v3)
		return 4294967294i64;
	*(_QWORD*)(v3 + 44) = 0i64;
	*(_DWORD*)(v3 + 52) = 0;
	return sub_1401ABAA0(a1);
}

