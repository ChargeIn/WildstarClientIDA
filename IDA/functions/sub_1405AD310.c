//----- (00000001405AD310) ----------------------------------------------------
__int64 __fastcall sub_1405AD310(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64(__fastcall * **v8)(_QWORD); // rax

	result = qword_140C659F8;
	*(_DWORD*)(a1 + 192) = a2;
	v3 = *(_QWORD*)(result + 200);
	if (v3)
	{
		v4 = sub_1405B1510(&qword_140C7DFB0);
		if (v4 && *(_DWORD*)(v4 + 192) == 4)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
			v6 = 32i64;
		}
		else
		{
			v7 = sub_1405B1510(&qword_140C7DFB0);
			if (!v7 || *(_DWORD*)(v7 + 192) != 3)
				goto LABEL_9;
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
			v6 = 254i64;
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 120i64))(v5, v6);
	LABEL_9:
		v8 = (__int64(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
		return (**v8)(v8);
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

