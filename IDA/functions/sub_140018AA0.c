//----- (0000000140018AA0) ----------------------------------------------------
int** __fastcall sub_140018AA0(__int64 a1, int** a2)
{
	int v2; // esi
	__int64 v3; // rbx
	__int64 v4; // r12
	_QWORD* v7; // r15
	_QWORD* v8; // rdi
	int v9; // ecx
	unsigned __int64 v10; // rcx
	unsigned __int16* v11; // rdx
	int* v13; // [rsp+60h] [rbp+18h] BYREF

	v2 = 0;
	v3 = 0i64;
	v4 = *(int*)(qword_140C635F0 + 296);
	if ((int)v4 <= 0)
		goto LABEL_7;
	v7 = *(_QWORD**)(qword_140C635F0 + 288);
	v8 = v7;
	while (1)
	{
		v9 = *(unsigned __int16*)*v8;
		if ((((v9 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v9 - 150) <= 1)
			&& !(unsigned int)sub_14018E2C0(*v8 + 2i64, L"ncAppGroupCode"))
		{
			break;
		}
		++v3;
		++v2;
		++v8;
		if (v3 >= v4)
			goto LABEL_7;
	}
	if (v2 + 1 < (int)v4 && (v11 = (unsigned __int16*)v7[v2 + 1]) != 0i64 && (sub_14018DD50(&v13, v11), v13))
	{
		*a2 = v13;
	}
	else
	{
	LABEL_7:
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 5864) + 56i64);
		if (v10 && v10 <= qword_140C3FE70 && v10 + qword_140C3FE68)
			sub_14018DD50(a2, (unsigned __int16*)(v10 + qword_140C3FE68));
		else
			*a2 = 0i64;
	}
	return a2;
}
// 1409E0AA0: using guessed type wchar_t aNcappgroupcode[15];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;

