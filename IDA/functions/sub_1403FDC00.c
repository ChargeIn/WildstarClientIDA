//----- (00000001403FDC00) ----------------------------------------------------
void __fastcall sub_1403FDC00(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	_QWORD* v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_1403FDC00(a1, v2[3]);
			v4 = (_QWORD*)v2[2];
			if (qword_140C65898)
			{
				v5 = *(_QWORD*)(qword_140C65898 + 29504);
				if (v5)
					sub_1400EA3E0(v5, "MessageFinished", byte_1409EB834, v2 + 8);
			}
			v6 = v2[15];
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v2[15] = 0i64;
			}
			v7 = v2[16];
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				v2[16] = 0i64;
			}
			v8 = v2[10];
			if (v8)
				sub_14018B900(v8, 0);
			v9 = v2[5];
			if (v9)
				sub_14018B900(v9, 0);
			sub_14018B900((__int64)v2, 0);
			v2 = v4;
		} while (v4);
	}
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

