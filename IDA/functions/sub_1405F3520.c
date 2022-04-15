//----- (00000001405F3520) ----------------------------------------------------
__int64 __fastcall sub_1405F3520(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rbp
	unsigned int i; // edi
	__int64 v7; // rdi
	__int64 v8; // rax
	_QWORD* v9; // rcx

	v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 136i64))(a1, *a2);
	v4 = v3;
	if (v3)
	{
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v3 + 432i64))(v3, a2 + 2);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 448i64))(v4, a2[13], a2[12]);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 456i64))(v4, a2[14]);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 272i64))(v4);
		v5 = 0i64;
		for (i = 0; i < a2[15]; ++i)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 256i64))(
				v4,
				*(unsigned int*)(*((_QWORD*)a2 + 8) + 4i64 * i));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 304i64))(v4);
		if (a2[18])
		{
			do
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 288i64))(
					v4,
					*(unsigned int*)(*((_QWORD*)a2 + 10) + 8 * v5),
					*(unsigned int*)(*((_QWORD*)a2 + 10) + 8 * v5 + 4));
				v5 = (unsigned int)(v5 + 1);
			} while ((unsigned int)v5 < a2[18]);
		}
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 248i64))(v4))
		{
			v7 = *(_QWORD*)(qword_140C65898 + 29504);
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 320i64))(v4);
			sub_1400EA3E0(v7, "PublicEventObjectiveUpdate", byte_1409ED1AC, v8);
		}
		v9 = (_QWORD*)qword_140C65BA8;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		sub_1405F9E30(v9, (__int64)(v9 + 40), *a2);
	}
	return 0i64;
}
// 1409ED1AC: using guessed type _BYTE byte_1409ED1AC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

