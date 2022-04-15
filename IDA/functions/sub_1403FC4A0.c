//----- (00000001403FC4A0) ----------------------------------------------------
_QWORD* __fastcall sub_1403FC4A0(__int64 a1)
{
	unsigned int i; // edi
	unsigned int v3; // eax
	__int64 v4; // rax
	int* v5; // rsi
	int* v6; // rax
	int* v7; // rbx
	int* v8; // rax
	int v9; // eax
	_QWORD* result; // rax
	_QWORD* v11; // rbx
	unsigned __int64 v12; // rsi
	unsigned int v13; // edx
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rdi
	__int64 v20; // rax
	_QWORD v21[2]; // [rsp+20h] [rbp-48h] BYREF
	char v22[16]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v23; // [rsp+70h] [rbp+8h] BYREF
	__int64 v24; // [rsp+78h] [rbp+10h] BYREF
	unsigned __int64 v25; // [rsp+80h] [rbp+18h] BYREF

	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v3 = qword_140C63838(off_140A6E3E8, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C64634 || (int)sub_14024D920() < 0)
			break;
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64270 + 40i64))(qword_140C64270);
	LABEL_7:
		if (i >= v3)
			break;
		if (qword_140C63848)
		{
			v4 = qword_140C63848(off_140A6E3E8, i, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				continue;
			v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 32i64))(qword_140C64270, i);
		}
		v5 = (int*)v4;
		if (v4)
		{
			v6 = sub_14018B280(56i64, 0);
			v7 = v6;
			if (v6)
			{
				*(_QWORD*)v6 = &off_140B66938;
				v8 = sub_14018B280(40i64, 0);
				*((_QWORD*)v7 + 5) = 0i64;
				*((_QWORD*)v7 + 4) = v8;
				*(_BYTE*)v8 = 0;
				*(_QWORD*)(*((_QWORD*)v7 + 4) + 8i64) = 0i64;
				*(_QWORD*)(*((_QWORD*)v7 + 4) + 16i64) = *((_QWORD*)v7 + 4);
				*(_QWORD*)(*((_QWORD*)v7 + 4) + 24i64) = *((_QWORD*)v7 + 4);
				*((_QWORD*)v7 + 1) = v5;
				*((_QWORD*)v7 + 2) = 0i64;
			}
			else
			{
				v7 = 0i64;
			}
			v9 = *v5;
			v21[1] = v7;
			LODWORD(v21[0]) = v9;
			sub_140055F80(a1, (__int64)v22, v21);
		}
	}
	result = *(_QWORD**)(a1 + 8);
	v11 = (_QWORD*)result[2];
	if (v11 != result)
	{
		do
		{
			v12 = v11[5];
			v13 = *(_DWORD*)(*(_QWORD*)(v12 + 8) + 8i64);
			if (v13)
			{
				v14 = *(_QWORD*)(a1 + 8);
				v15 = v14;
				v16 = *(_QWORD*)(v14 + 8);
				while (v16)
				{
					if (*(_DWORD*)(v16 + 32) < v13)
					{
						v16 = *(_QWORD*)(v16 + 24);
					}
					else
					{
						v15 = v16;
						v16 = *(_QWORD*)(v16 + 16);
					}
				}
				if (v15 == v14 || v13 < *(_DWORD*)(v15 + 32))
				{
					v24 = *(_QWORD*)(a1 + 8);
					v17 = &v24;
				}
				else
				{
					v23 = v15;
					v17 = &v23;
				}
				v18 = *v17;
				if (v18 != v14)
				{
					v19 = *(_QWORD*)(v18 + 40);
					v25 = v12;
					sub_140007810(v19 + 24, (__int64)v22, &v25);
					*(_QWORD*)(v12 + 16) = v19;
				}
			}
			v20 = v11[3];
			if (v20)
			{
				v11 = (_QWORD*)v11[3];
				for (result = *(_QWORD**)(v20 + 16); result; result = (_QWORD*)result[2])
					v11 = result;
			}
			else
			{
				for (result = (_QWORD*)v11[1]; v11 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v11 = result;
				if ((_QWORD*)v11[3] != result)
					v11 = result;
			}
		} while (v11 != *(_QWORD**)(a1 + 8));
	}
	return result;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B66938: using guessed type __int64 (__fastcall *off_140B66938)();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

