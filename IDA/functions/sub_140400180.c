//----- (0000000140400180) ----------------------------------------------------
__int64 __fastcall sub_140400180(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(__int64, _DWORD*))
{
	_DWORD* v3; // rsi
	__int64 v5; // rbx
	_DWORD* v7; // rdi
	void(__fastcall * **v8)(_QWORD); // rcx
	void(__fastcall * **v9)(_QWORD); // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	v3 = (_DWORD*)(a1 - 112);
	v5 = a1;
	if (a3(a2, (_DWORD*)(a1 - 112)))
	{
		v7 = v3 + 4;
		do
		{
			if ((_DWORD*)v5 != v3)
			{
				v8 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v7 + 5);
				if (v8)
					(**v8)(v8);
				v9 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v7 + 6);
				if (v9)
					(**v9)(v9);
				v10 = *(_QWORD*)(v5 + 56);
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					*(_QWORD*)(v5 + 56) = 0i64;
				}
				v11 = *(_QWORD*)(v5 + 64);
				if (v11)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
					*(_QWORD*)(v5 + 64) = 0i64;
				}
				*(_DWORD*)v5 = *v3;
				if (v7 - 2 != (_DWORD*)(v5 + 8))
					sub_14001C480(v5 + 8, *(int**)v7, *((int**)v7 + 1));
				*(_DWORD*)(v5 + 40) = v7[6];
				*(_DWORD*)(v5 + 44) = v7[7];
				*(_DWORD*)(v5 + 48) = v7[8];
				*(_QWORD*)(v5 + 56) = *((_QWORD*)v7 + 5);
				*(_QWORD*)(v5 + 64) = *((_QWORD*)v7 + 6);
				*(_DWORD*)(v5 + 72) = v7[14];
				*(_DWORD*)(v5 + 76) = v7[15];
				*(_DWORD*)(v5 + 84) = v7[17];
				*(_OWORD*)(v5 + 96) = *((_OWORD*)v7 + 5);
				*(_DWORD*)(v5 + 88) = v7[18];
				*(_DWORD*)(v5 + 80) = v7[16];
			}
			v5 = (__int64)v3;
			v3 -= 28;
			v7 -= 28;
		} while (a3(a2, v3));
	}
	return sub_140474EC0(v5, a2);
}

