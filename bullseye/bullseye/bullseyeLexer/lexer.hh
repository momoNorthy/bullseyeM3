#pragma once
#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include "Token.hh"

	namespace bullseye
	{
		namespace script
		{
			namespace lexer
			{
				class LexerMain
				{
				public:
					
					bool analyze(const std::shared_ptr<std::string> &p_raw)
					{
						std::string ln;
						ln = *p_raw;
						for (auto& a : ln)
						{
							/*
							  WITH, CREATE, VAR,
                                        WAVELINE, IF, ELSE,
                                        BREAK, CONTINUE, AND,
                                        OR, ID, TRUE,
                                        FALSE, NUM, FOR, WHILE, DO, USE

							*/
							//more
						}
					}
					Token scan()
					{

					}
				private:
				};
			}
		}
	}
