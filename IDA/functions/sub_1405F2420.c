//----- (00000001405F2420) ----------------------------------------------------
void __fastcall sub_1405F2420(__int64 a1, int a2)
{
	unsigned __int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rcx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 208))(&v6);
	v4 = *(_QWORD*)(a1 + 200) + 8 * (v3 % *(_QWORD*)(a1 + 192));
	if (*(_QWORD*)v4)
	{
		while (v3 != **(_QWORD**)v4
			|| !(*(unsigned int(__fastcall**)(int*, __int64))(a1 + 216))(&v6, *(_QWORD*)v4 + 16i64))
		{
			v4 = *(_QWORD*)v4 + 8i64;
			if (!*(_QWORD*)v4)
				return;
		}
		v5 = *(_QWORD*)v4;
		*(_QWORD*)v4 = *(_QWORD*)(*(_QWORD*)v4 + 8i64);
		sub_14018B900(v5, 0);
		--* (_QWORD*)(a1 + 184);
	}
}

