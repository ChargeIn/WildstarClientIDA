//----- (0000000140553FD0) ----------------------------------------------------
void __fastcall sub_140553FD0(__int64 a1, _QWORD* a2, int a3)
{
	unsigned int v5; // eax
	int* v6; // rcx
	__int64 v7; // rdi
	int v8; // ecx
	__int64 v9; // r8
	__int64 v10; // [rsp+30h] [rbp-18h] BYREF
	__int64(__fastcall * v11)(); // [rsp+38h] [rbp-10h]

	if (a3 || *((_DWORD*)a2 + 24))
	{
		*(_QWORD*)a1 = 0i64;
	}
	else
	{
		if (*((_DWORD*)a2 + 15) != **(_DWORD**)(a1 + 8))
		{
			*(_QWORD*)a1 = 0i64;
			(*(void(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
			return;
		}
		if (!(unsigned int)sub_140552F50(a1))
			goto LABEL_6;
		v5 = sub_14054F710(a1);
		v6 = (int*)a2[13];
		v7 = 0i64;
		if (v6)
			v8 = *v6;
		else
			v8 = 0;
		if (v8 == v5)
		{
			if (sub_140485E90((__int64)a2))
			{
				v11 = 0i64;
				v9 = *(_QWORD*)(qword_140C65898 + 25744);
				v10 = 0i64;
				if (*(_DWORD*)qword_140C65920)
					v7 = sub_140486F10(
						qword_140C65920,
						(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
						(__int128*)(v9 + 4528),
						(_DWORD*)a2 + 14,
						&v10);
				(*(void(__fastcall**)(_QWORD*, _QWORD, __int64))(*a2 + 8i64))(a2, *a2, v9);
				*(_QWORD*)a1 = v7;
			}
			else if ((int)sub_1404862B0((__int64)a2) < 0)
			{
			LABEL_6:
				*(_QWORD*)a1 = 0i64;
				(*(void(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
			}
		}
		else
		{
			v10 = a1;
			v11 = sub_140553FD0;
			if (*(_DWORD*)qword_140C65920)
				sub_140486DC0(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
					(_DWORD*)a2 + 14,
					&v10,
					v5,
					0);
			(*(void(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
		}
	}
}
// 140554112: variable 'v9' is possibly undefined
// 140B1E260: using guessed type wchar_t aArtFxModelProp_13[66];
// 140B1E380: using guessed type wchar_t aArtFxModelProp_14[72];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

