//----- (000000014088AFE0) ----------------------------------------------------
void __fastcall sub_14088AFE0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5)
{
	__int64 v5; // rbx
	unsigned __int8 v8; // r14
	_QWORD* v9; // rdi
	int v10; // [rsp+58h] [rbp+20h] BYREF

	v10 = a4;
	v5 = qword_140C629D8;
	if (qword_140C629D8)
	{
		v8 = a5;
		do
		{
			v9 = (_QWORD*)v5;
			v5 = *(_QWORD*)(v5 + 120);
			if ((*(__int64(__fastcall**)(_QWORD*))(*v9 + 120i64))(v9) == a2
				&& (!a3 || *(_QWORD*)(v9[13] + 56i64) == a3)
				&& (*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(*v9 + 152i64))(v9, &v10, v8) == 1)
			{
				sub_14083BE70(qword_140C61B80, *(_DWORD*)(v9[13] + 48i64));
			}
		} while (v5);
	}
}
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C629D8: using guessed type __int64 qword_140C629D8;

