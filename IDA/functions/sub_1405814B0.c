//----- (00000001405814B0) ----------------------------------------------------
__int64 sub_1405814B0()
{
	int* v0; // rdi
	int v1; // ebx
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rax
	int v10; // edx
	__int64 v11; // rax
	int v12; // edx
	__int64 v13; // rax
	int v14; // edx
	__int64 v15; // rax
	__int64 v16; // rcx

	v0 = (int*)xmmword_140C7DE30;
	v1 = 0;
	dword_140C7DE28 = 1;
	if (!(_QWORD)xmmword_140C7DE30)
	{
		v2 = sub_14018B280(16i64, 0);
		v0 = v2;
		if (v2)
		{
			*((_QWORD*)v2 + 1) = 8i64;
			v3 = sub_14018B280(48i64, 0);
			if (v3)
			{
				v4 = v3 + 4;
				*((_QWORD*)v4 - 2) = &off_140B5F110;
				*(_QWORD*)v0 = v4;
			}
			else
			{
				*(_QWORD*)v0 = 16i64;
			}
		}
		else
		{
			v0 = 0i64;
		}
		*(_QWORD*)&xmmword_140C7DE30 = v0;
	}
	**(_DWORD**)v0 = 0;
	v5 = sub_140200220(0x2F5u);
	if (v5)
		v6 = *(_DWORD*)(v5 + 4);
	else
		v6 = 0;
	*(_DWORD*)(*(_QWORD*)xmmword_140C7DE30 + 4i64) = v6;
	v7 = sub_140200220(0x2F6u);
	if (v7)
		v8 = *(_DWORD*)(v7 + 4);
	else
		v8 = 0;
	*(_DWORD*)(*(_QWORD*)xmmword_140C7DE30 + 8i64) = v8;
	v9 = sub_140200220(0x2F7u);
	if (v9)
		v10 = *(_DWORD*)(v9 + 4);
	else
		v10 = 0;
	*(_DWORD*)(*(_QWORD*)xmmword_140C7DE30 + 12i64) = v10;
	v11 = sub_140200220(0x2F8u);
	if (v11)
		v12 = *(_DWORD*)(v11 + 4);
	else
		v12 = 0;
	*(_DWORD*)(*(_QWORD*)xmmword_140C7DE30 + 16i64) = v12;
	v13 = sub_140200220(0x2F9u);
	if (v13)
		v14 = *(_DWORD*)(v13 + 4);
	else
		v14 = 0;
	*(_DWORD*)(*(_QWORD*)xmmword_140C7DE30 + 20i64) = v14;
	v15 = sub_140200220(0x2FAu);
	if (v15)
		v1 = *(_DWORD*)(v15 + 4);
	*(_DWORD*)(*(_QWORD*)xmmword_140C7DE30 + 24i64) = v1;
	v16 = *(_QWORD*)xmmword_140C7DE30;
	*(_DWORD*)(v16 + 28) = -1;
	sub_140581620(v16);
	return 0i64;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140C7DE28: using guessed type int dword_140C7DE28;
// 140C7DE30: using guessed type __int128 xmmword_140C7DE30;

