//----- (0000000140491F60) ----------------------------------------------------
__int64 sub_140491F60()
{
	int* v0; // rax
	int* v1; // rbx
	__int64 v2; // rax
	int* v3; // rax
	int* v4; // rbx
	void(__fastcall * *v5)(int*); // rax
	int* v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // edx
	__int64 v9; // rcx
	int* v10; // rbx
	int* v11; // rax
	__int64 v12; // rax
	int* v13; // rax
	int* v14; // rbx
	void(__fastcall * *v15)(int*); // rax

	if (!qword_140C65968)
	{
		v0 = sub_14018B280(392i64, 0);
		v1 = v0;
		if (v0)
		{
			sub_140492190(v0);
			*(_QWORD*)v1 = off_140B67310;
		}
		else
		{
			v1 = 0i64;
		}
		v2 = *(_QWORD*)v1;
		qword_140C65968 = (__int64)v1;
		(*(void(__fastcall**)(int*))(v2 + 8))(v1);
	}
	if (!qword_140C65978)
	{
		v3 = sub_14018B280(264i64, 0);
		v4 = v3;
		if (v3)
		{
			sub_140492470(v3);
			*(_QWORD*)v4 = off_140B67330;
		}
		else
		{
			v4 = 0i64;
		}
		v5 = *(void(__fastcall***)(int*))v4;
		qword_140C65978 = (__int64)v4;
		(*v5)(v4);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65978 + 8i64))(qword_140C65978, 0i64);
	}
	if (!qword_140C65958)
	{
		v6 = sub_14018B280(64i64, 0);
		if (v6)
			qword_140C65958 = (__int64)sub_140492110(v6);
		else
			qword_140C65958 = 0i64;
		sub_140616F80(v7);
	}
	if (!qword_140C65960)
	{
		v10 = sub_14018B280(40i64, 0);
		if (v10)
		{
			*(_QWORD*)v10 = &off_140B67280;
			v11 = sub_14018B280(264i64, 0);
			*((_QWORD*)v10 + 3) = 0i64;
			*((_QWORD*)v10 + 2) = v11;
			*(_BYTE*)v11 = 0;
			*(_QWORD*)(*((_QWORD*)v10 + 2) + 8i64) = 0i64;
			v12 = *((_QWORD*)v10 + 2);
			qword_140C65960 = (__int64)v10;
			*(_QWORD*)(v12 + 16) = v12;
			*(_QWORD*)(*((_QWORD*)v10 + 2) + 24i64) = *((_QWORD*)v10 + 2);
			*(_QWORD*)v10 = off_140B67258;
		}
		else
		{
			qword_140C65960 = 0i64;
		}
		sub_1404931C0(v9, v8);
	}
	if (!qword_140C65950)
	{
		v13 = sub_14018B280(120i64, 0);
		v14 = v13;
		if (v13)
		{
			sub_140492700(v13);
			*(_QWORD*)v14 = off_140B67238;
			*((_QWORD*)v14 + 10) = 0i64;
			*((_QWORD*)v14 + 9) = 0i64;
			*((_QWORD*)v14 + 12) = 0i64;
			*((_QWORD*)v14 + 11) = 0i64;
		}
		else
		{
			v14 = 0i64;
		}
		v15 = *(void(__fastcall***)(int*))v14;
		qword_140C65950 = (__int64)v14;
		(*v15)(v14);
	}
	return 0i64;
}
// 140492032: variable 'v7' is possibly undefined
// 1404920A5: variable 'v9' is possibly undefined
// 1404920A5: variable 'v8' is possibly undefined
// 140B67238: using guessed type __int64 (__fastcall *off_140B67238[10])();
// 140B67258: using guessed type __int64 (__fastcall *off_140B67258[6])();
// 140B67280: using guessed type __int64 (__fastcall *off_140B67280)();
// 140B67310: using guessed type __int64 (__fastcall *off_140B67310[14])();
// 140B67330: using guessed type __int64 (__fastcall *off_140B67330[10])();
// 140C65950: using guessed type __int64 qword_140C65950;
// 140C65958: using guessed type __int64 qword_140C65958;
// 140C65960: using guessed type __int64 qword_140C65960;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65978: using guessed type __int64 qword_140C65978;

