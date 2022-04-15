//----- (000000014048D680) ----------------------------------------------------
_QWORD* __fastcall sub_14048D680(__int64 a1, unsigned int a2)
{
	_QWORD* result; // rax
	__int64 v3; // rdi
	unsigned int v5; // esi
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8[4]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v9; // [rsp+40h] [rbp-18h] BYREF
	void* v10; // [rsp+48h] [rbp-10h]
	unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

	v11 = a2;
	result = (_QWORD*)qword_140C65898;
	v3 = qword_140C65948;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		sub_14048D7A0(qword_140C65948, a2);
		result = (_QWORD*)sub_14048D940(v3, a2);
		v5 = (unsigned int)result;
		if ((_DWORD)result)
		{
			result = (_QWORD*)sub_14024B980((unsigned int)result);
			if (result)
			{
				v8[1] = a2;
				v6 = 0i64;
				v8[0] = 7;
				v8[2] = 0;
				v9 = v3;
				if (sub_140485FA0(v5, 0))
				{
					v10 = sub_14048DAE0;
					if (*(_DWORD*)qword_140C65920)
					{
						v7 = sub_140486F10(
							qword_140C65920,
							(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
							(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
							v8,
							&v9);
					LABEL_9:
						v6 = v7;
					}
				}
				else
				{
					v10 = sub_14048DA90;
					if (*(_DWORD*)qword_140C65920)
					{
						v7 = sub_140486DC0(
							qword_140C65920,
							(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
							v8,
							&v9,
							v5,
							0);
						goto LABEL_9;
					}
				}
				result = sub_140055BE0(v3 + 168, &v11);
				*result = v6;
			}
		}
	}
	return result;
}
// 140B08C20: using guessed type wchar_t aArtFxModelProp_7[72];
// 140B08CB0: using guessed type wchar_t aArtFxModelProp_8[66];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65948: using guessed type __int64 qword_140C65948;

