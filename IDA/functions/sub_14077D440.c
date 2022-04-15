//----- (000000014077D440) ----------------------------------------------------
void __fastcall sub_14077D440(__int64 a1, _DWORD* a2, int a3)
{
	__int64 v4[3]; // [rsp+30h] [rbp-18h] BYREF

	if (!a3 && !a2[24])
	{
		if (sub_140485E90((__int64)a2))
		{
			v4[1] = 0i64;
			v4[0] = 0i64;
			if (*(_DWORD*)qword_140C65920)
			{
				sub_140486F10(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
					(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
					a2 + 14,
					v4);
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a2 + 8i64))(a2);
				return;
			}
		}
		else if ((int)sub_1404862B0((__int64)a2) >= 0)
		{
			return;
		}
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a2 + 8i64))(a2);
	}
}
// 140B4F420: using guessed type wchar_t aArtFxModelProp_30[72];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

