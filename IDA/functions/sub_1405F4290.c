//----- (00000001405F4290) ----------------------------------------------------
__int64 __fastcall sub_1405F4290(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebp
	__m128* v4; // rax
	__int64 v5; // rdx
	__m128* v6; // rsi
	_QWORD* v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	int v10; // esi
	__int64 v11; // rbx
	int v12[4]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v13; // [rsp+40h] [rbp-28h] BYREF
	void(__fastcall * v14)(__int64, __int64, int); // [rsp+48h] [rbp-20h]
	float v15; // [rsp+78h] [rbp+10h] BYREF
	float v16; // [rsp+80h] [rbp+18h] BYREF
	unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

	result = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		v3 = sub_1405F46A0((unsigned int*)a1, &v16, &v17);
		v4 = sub_1405F48B0(a1, &v15);
		v5 = *(_QWORD*)(a1 + 192);
		v6 = v4;
		if (v5)
		{
			v7 = *(_QWORD**)(qword_140C65920 + 8);
			if (v7)
			{
				while (v7[9] != v5)
				{
					v7 = (_QWORD*)v7[4];
					if (!v7)
						goto LABEL_8;
				}
				(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
				(*(void(__fastcall**)(_QWORD*, __int64)) * v7)(v7, 1i64);
			}
		}
	LABEL_8:
		if (v6 && (!v3 || v15 < v16))
		{
			result = sub_14047EA60(v6);
			*(_QWORD*)(a1 + 192) = result;
			return result;
		}
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		v12[0] = 4;
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8);
		v10 = v17;
		v11 = 0i64;
		v12[2] = 0;
		v12[1] = v9;
		if (sub_140485FA0(v3, v17))
		{
			result = qword_140C65898;
			v14 = 0i64;
			v13 = 0i64;
			if (*(_DWORD*)qword_140C65920)
			{
				result = sub_140486F10(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
					(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
					v12,
					&v13);
			LABEL_17:
				v11 = result;
			}
		}
		else
		{
			result = (__int64)sub_1405F4A80;
			v13 = a1;
			v14 = sub_1405F4A80;
			if (*(_DWORD*)qword_140C65920)
			{
				result = sub_140486DC0(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
					v12,
					&v13,
					v3,
					v10);
				goto LABEL_17;
			}
		}
		*(_QWORD*)(a1 + 192) = v11;
	}
	return result;
}
// 140B24250: using guessed type wchar_t aArtFxModelProp_26[66];
// 140B24400: using guessed type wchar_t aArtFxModelProp_25[72];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

