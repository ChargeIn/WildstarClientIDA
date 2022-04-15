//----- (00000001401708E0) ----------------------------------------------------
void __fastcall sub_1401708E0(__int64* a1, int* a2)
{
	__int64 v3; // rax
	int v4; // edi
	__int64 v5; // rsi
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // r8

	if (a2)
	{
		v3 = sub_1400E58C0(a1[4], a2);
		a1[202] = v3;
		if (!v3)
			a1[202] = a1[87];
		v4 = 0;
		if ((int)sub_14016DC20((__int64)a1) > 0)
		{
			v5 = 0i64;
			do
			{
				v6 = a1[202];
				v7 = *(_QWORD*)(v5 + a1[174]);
				if (v6)
				{
					v8 = *(_QWORD*)(v7 + 16);
					v9 = *(_QWORD*)(v6 + 96);
					v10 = v7 + 16;
					if (v8)
						(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v8 + 40i64))(v8, v9, v10);
					else
						(*(void(__fastcall**)(__int64, __int64, void*, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
							qword_140C65680,
							v9,
							&unk_1409DD27C,
							-1i64,
							v10);
				}
				++v4;
				v5 += 8i64;
			} while (v4 < (int)sub_14016DC20((__int64)a1));
		}
	}
}
// 140C65680: using guessed type __int64 qword_140C65680;

