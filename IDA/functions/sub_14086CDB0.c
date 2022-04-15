#include "../winhttp.h"

//----- (000000014086CDB0) ----------------------------------------------------
_QWORD* __fastcall sub_14086CDB0(__int64 a1, __int64* a2, unsigned __int16* a3, unsigned int* a4)
{
	unsigned __int16 v4; // di
	__int64 v8; // r14
	unsigned int v9; // eax
	unsigned int v10; // r13d
	char v11; // r15
	int v12; // r12d
	_QWORD* v13; // rbx
	_QWORD* result; // rax
	__int64 i; // rcx
	char v16; // bp
	int v17; // edi
	__int16 v18; // ax
	unsigned __int16 v19; // ax
	unsigned __int16 v20; // ax
	unsigned int v21; // eax
	__int64 v22; // rax
	unsigned int v23; // eax
	__int64 v24; // [rsp+20h] [rbp-48h]
	char v25; // [rsp+70h] [rbp+8h] BYREF
	unsigned __int16* v26; // [rsp+80h] [rbp+18h]
	unsigned int* v27; // [rsp+88h] [rbp+20h]

	v27 = a4;
	v26 = a3;
	v4 = 0;
	*a3 = 0;
	*a4 = 0;
	v8 = 0i64;
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
	v10 = v9;
	if (!v9)
		return (_QWORD*)v8;
	if (v9 == 1)
	{
		v23 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 192) + 32i64))(*(_QWORD*)(a1 + 192), 0i64);
		*a4 = v23;
		return (_QWORD*)sub_140830F00(qword_140C61BA8, v23, 0);
	}
	v11 = 0;
	v12 = 0;
	v13 = 0i64;
	v24 = 0i64;
	if ((*(_BYTE*)(a1 + 479) & 7) == 1)
	{
		result = sub_14086CC50(a1, a2);
		v13 = result;
		if (!result)
			return result;
		for (i = 0i64; ; i = v24)
		{
		LABEL_9:
			v25 = 1;
			if (v11)
			{
				if (++v4 >= v10)
					v4 = 0;
				v16 = sub_14086C6B0(a1, i, v4);
				if (!v16)
				{
				LABEL_29:
					if (!v11)
						return (_QWORD*)v8;
					goto LABEL_30;
				}
				sub_14086E1E0(a1, v24, v4);
			}
			else
			{
				if ((*(_BYTE*)(a1 + 479) & 7) == 1)
				{
					if (*((_BYTE*)v13 + 24))
					{
						v17 = *((__int16*)v13 + 13);
						if (v17 + 1 == (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 192) + 24i64))(
							*(_QWORD*)(a1 + 192),
							1i64))
						{
							if ((*(_BYTE*)(a1 + 479) & 0x20) != 0)
							{
								v4 = v17 - 1;
								*((_BYTE*)v13 + 24) = 0;
								*((_WORD*)v13 + 13) = v4;
							}
							else
							{
								*((_WORD*)v13 + 13) = 0;
								v4 = 0;
							}
						}
						else
						{
							v4 = v17 + 1;
							*((_WORD*)v13 + 13) = v4;
						}
					}
					else
					{
						v18 = *((_WORD*)v13 + 13);
						if (v18)
						{
							v19 = v18 - 1;
							*((_WORD*)v13 + 13) = v19;
							v4 = v19;
						}
						else
						{
							*((_WORD*)v13 + 13) = 1;
							*((_BYTE*)v13 + 24) = 1;
							v4 = 1;
						}
					}
					goto LABEL_26;
				}
				v20 = sub_14086D8F0(a1, i, &v25, 0i64);
				v16 = v25;
				v4 = v20;
			}
			if (!v16)
				goto LABEL_29;
		LABEL_26:
			v21 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 192) + 32i64))(*(_QWORD*)(a1 + 192), v4);
			*v27 = v21;
			v22 = sub_140830F00(qword_140C61BA8, v21, 0);
			v8 = v22;
			if (v22)
			{
				if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v22 + 120i64))(v22))
				{
					*v26 = v4;
					return (_QWORD*)v8;
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
				v8 = 0i64;
			}
		LABEL_30:
			if (!v12 && (*(_BYTE*)(a1 + 479) & 7) == 0 && (*(_BYTE*)(a1 + 478) & 0x30) != 16)
				v11 = 1;
			if (++v12 >= v10)
				return (_QWORD*)v8;
		}
	}
	result = sub_14086CB20(a1, v9, a2);
	i = (__int64)result;
	v24 = (__int64)result;
	if (result)
		goto LABEL_9;
	return result;
}

