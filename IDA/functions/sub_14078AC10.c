//----- (000000014078AC10) ----------------------------------------------------
void __fastcall sub_14078AC10(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	unsigned int v6; // eax
	__int64 v7; // rcx
	void(__fastcall * v8)(_QWORD); // rax
	__int64 v9; // rcx
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+2Ch] [rbp-1Ch]
	__int64 v13; // [rsp+34h] [rbp-14h]
	int v14; // [rsp+3Ch] [rbp-Ch]

	if (!a4 && a6)
	{
		switch (*(_DWORD*)(a6 + 104))
		{
		case 0:
			goto LABEL_13;
		case 1:
			v7 = *(_QWORD*)(a6 + 96);
			*(_DWORD*)(a6 + 104) = 2;
			v10 = 1120i64;
			v12 = 0i64;
			v13 = 0i64;
			v11 = 1065353216;
			v14 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v10);
			v8 = *(void(__fastcall**)(_QWORD))(a6 + 48);
			if (v8)
				v8(*(_QWORD*)(a6 + 56));
			return;
		case 3:
			*(_DWORD*)(a6 + 104) = 4;
			goto LABEL_5;
		case 4:
		LABEL_5:
			v6 = 1122;
			goto LABEL_10;
		case 5:
			*(_DWORD*)(a6 + 104) = 2;
			goto LABEL_9;
		case 6:
		case 7:
			*(_DWORD*)(a6 + 104) = 0;
		LABEL_13:
			v6 = 1118;
			goto LABEL_10;
		default:
		LABEL_9:
			v6 = 1120;
		LABEL_10:
			v9 = *(_QWORD*)(a6 + 96);
			v10 = v6;
			v12 = 0i64;
			v13 = 0i64;
			v11 = 1065353216;
			v14 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v10);
			break;
		}
	}
}

