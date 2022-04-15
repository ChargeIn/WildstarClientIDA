//----- (000000014037EA00) ----------------------------------------------------
void __fastcall sub_14037EA00(__m128** a1)
{
	__int64* v2; // rbx
	__int64 v3; // rbp
	__int64 v4; // rcx
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // [rsp+58h] [rbp+10h] BYREF
	__int64 v9; // [rsp+60h] [rbp+18h] BYREF

	v2 = (__int64*)(a1 + 11);
	v3 = 4i64;
	do
	{
		v4 = *(v2 - 4);
		if (v4 && (int)sub_140373190(v4, &v8, &v9) >= 0)
		{
			v5 = v9;
			v6 = v8;
		}
		else
		{
			v6 = 0i64;
			v8 = 0i64;
			v5 = 0i64;
			v9 = 0i64;
		}
		if (*v2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		*v2 = v6;
		v7 = v2[4];
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			v2[4] = 0i64;
		}
		v2[4] = v5;
		++v2;
		--v3;
	} while (v3);
	sub_14037D540(a1);
}

