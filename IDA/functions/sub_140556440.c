//----- (0000000140556440) ----------------------------------------------------
__int64 __fastcall sub_140556440(__int64 a1, int a2)
{
	unsigned int v2; // r11d
	_QWORD** v4; // r9
	int v5; // ebx
	_QWORD* v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // edx

	v2 = 0;
	v4 = (_QWORD**)(*(_QWORD*)(a1 + 112) + 8i64);
	v5 = 11712;
	while (1)
	{
		v6 = (_QWORD*)**v4;
		if (v6 != *v4)
			break;
	LABEL_7:
		++v2;
		v4 += 2;
		if (v2 >= 0xB)
			return 0i64;
	}
	while (1)
	{
		v7 = v6[2];
		v8 = *(_DWORD*)(v7 + 56);
		if (v8 <= 0xD && _bittest(&v5, v8) && *(_DWORD*)(v7 + 60) == a2)
			return 1i64;
		v6 = (_QWORD*)*v6;
		if (v6 == *v4)
			goto LABEL_7;
	}
}

